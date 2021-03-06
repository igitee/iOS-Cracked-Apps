//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FAMBProgressHUDDelegate.h"
#import "MTHUDProtocol.h"

@class FAMBProgressHUD, NSString, UIView;

@interface MTHUD : NSObject <MTHUDProtocol, FAMBProgressHUDDelegate>
{
    UIView *_view;
    FAMBProgressHUD *_progressHud;
}

@property(retain, nonatomic) FAMBProgressHUD *progressHud; // @synthesize progressHud=_progressHud;
@property(nonatomic) __weak UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)hudWasHidden:(id)arg1;
- (void)showSuccessWithStatus:(id)arg1;
- (void)showMessageWithContent:(id)arg1;
- (void)showErrorWithStatus:(id)arg1;
- (void)progressHudTaskWith;
- (void)dismissHudDelay:(double)arg1;
- (void)dismissHud;
- (void)dismissHud:(_Bool)arg1;
- (void)dismissWithError:(id)arg1 afterDelay:(double)arg2;
- (void)dismissWithSuccess:(id)arg1 afterDelay:(double)arg2;
- (void)showWithCustomView:(id)arg1;
- (void)showErrorWithStatus:(id)arg1 duration:(double)arg2;
- (void)showSuccessWithStatus:(id)arg1 duration:(double)arg2;
- (void)showWithStatus:(id)arg1;
- (void)showMessageWithContent:(id)arg1 duration:(double)arg2;
- (void)initHud;
- (id)initWithView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

