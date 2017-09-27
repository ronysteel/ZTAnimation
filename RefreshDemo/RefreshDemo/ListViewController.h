//
//  LIstViewController.h
//  RefreshDemo
//
//  Created by apple on 2017/9/27.
//  Copyright © 2017年 shang. All rights reserved.
//

#import <UIKit/UIKit.h>

#define kDisbaleAutoAdjustScrollViewInsets(scrollView, vc)\
do { \
_Pragma("clang diagnostic push") \
_Pragma("clang diagnostic ignored \"-Warc-performSelector-leaks\"") \
if ([UIScrollView instancesRespondToSelector:NSSelectorFromString(@"setContentInsetAdjustmentBehavior:")]) {\
[scrollView   performSelector:NSSelectorFromString(@"setContentInsetAdjustmentBehavior:") withObject:@(2)];\
} else {\
vc.automaticallyAdjustsScrollViewInsets = NO;\
}\
_Pragma("clang diagnostic pop") \
} while (0)


@interface ListViewController : UIViewController

@property (nonatomic, assign) NSInteger refreshStyle;
@end
