//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBPopoverOverlay, UIViewController;
@protocol FBNavigation_DEPRECATED_DO_NOT_USE;

@protocol FBNavigationCoordinatorDeprecated <NSObject>
@property(readonly, nonatomic) UIViewController *viewControllerOnBottomStack;
@property(readonly, nonatomic) _Bool hasModalViewController;
@property(readonly, nonatomic) id <FBNavigation_DEPRECATED_DO_NOT_USE> DEPRECATED_DO_NOT_USE_fb_navigationOwner;
- (void)dismissPopoverOverlayContainingContentViewController:(UIViewController *)arg1 animated:(_Bool)arg2;
- (void)dismissPopoverOverlay:(FBPopoverOverlay *)arg1 animated:(_Bool)arg2 completion:(void (^)(void))arg3;
- (void)dismissPopoverOverlay:(FBPopoverOverlay *)arg1 animated:(_Bool)arg2;
- (void)presentPopoverOverlay:(FBPopoverOverlay *)arg1 animated:(_Bool)arg2 completion:(void (^)(void))arg3;
- (void)presentPopoverOverlay:(FBPopoverOverlay *)arg1 animated:(_Bool)arg2;
- (void)dismissFloatingViewController:(UIViewController *)arg1;
- (void)presentFloatingViewController:(UIViewController *)arg1 viewFrameBlock:(struct CGRect (^)(struct CGRect))arg2;
@end

