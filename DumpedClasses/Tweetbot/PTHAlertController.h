//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PTHViewController.h"

#import "PTHTransitioningController-Protocol.h"

@class NSString, PTHTransitioningDelegate, _PTHAlertView;

@interface PTHAlertController : PTHViewController <PTHTransitioningController>
{
    PTHTransitioningDelegate *_transitioningDelegate;
    _Bool _progressIndicator;
    NSString *_message;
    NSString *_okButtonTitle;
    CDUnknownBlockType _willOKBlock;
    CDUnknownBlockType _didOKBlock;
    NSString *_cancelButtonTitle;
    CDUnknownBlockType _willCancelBlock;
    CDUnknownBlockType _didCancelBlock;
    NSString *_otherButtonTitle;
    CDUnknownBlockType _willOtherBlock;
    CDUnknownBlockType _didOtherBlock;
    long long _dismissCode;
    CDUnknownBlockType _willDismissBlock;
    CDUnknownBlockType _didDismissBlock;
    PTHAlertController *_replacementAlertController;
    PTHAlertController *_presentingAlertController;
    _PTHAlertView *_contentView;
}

@property(retain, nonatomic) _PTHAlertView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak PTHAlertController *presentingAlertController; // @synthesize presentingAlertController=_presentingAlertController;
@property(retain, nonatomic) PTHAlertController *replacementAlertController; // @synthesize replacementAlertController=_replacementAlertController;
@property(copy, nonatomic) CDUnknownBlockType didDismissBlock; // @synthesize didDismissBlock=_didDismissBlock;
@property(copy, nonatomic) CDUnknownBlockType willDismissBlock; // @synthesize willDismissBlock=_willDismissBlock;
@property(readonly, nonatomic) long long dismissCode; // @synthesize dismissCode=_dismissCode;
@property(nonatomic, getter=hasProgressIndicator) _Bool progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property(copy, nonatomic) CDUnknownBlockType didOtherBlock; // @synthesize didOtherBlock=_didOtherBlock;
@property(copy, nonatomic) CDUnknownBlockType willOtherBlock; // @synthesize willOtherBlock=_willOtherBlock;
@property(copy, nonatomic) NSString *otherButtonTitle; // @synthesize otherButtonTitle=_otherButtonTitle;
@property(copy, nonatomic) CDUnknownBlockType didCancelBlock; // @synthesize didCancelBlock=_didCancelBlock;
@property(copy, nonatomic) CDUnknownBlockType willCancelBlock; // @synthesize willCancelBlock=_willCancelBlock;
@property(copy, nonatomic) NSString *cancelButtonTitle; // @synthesize cancelButtonTitle=_cancelButtonTitle;
@property(copy, nonatomic) CDUnknownBlockType didOKBlock; // @synthesize didOKBlock=_didOKBlock;
@property(copy, nonatomic) CDUnknownBlockType willOKBlock; // @synthesize willOKBlock=_willOKBlock;
@property(copy, nonatomic, setter=setOKButtonTitle:) NSString *okButtonTitle; // @synthesize okButtonTitle=_okButtonTitle;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)other:(id)arg1;
- (void)ok:(id)arg1;
- (void)cancel:(id)arg1;
- (void)replaceWithController:(id)arg1;
- (void)dismissTransition:(id)arg1;
- (void)presentTransition:(id)arg1;
- (void)_constrainContentView;
- (void)loadView;
- (void)configurePresentationController:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

