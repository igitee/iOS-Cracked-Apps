//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DRCBaseViewController.h"

#import "UITextFieldDelegate.h"

@class DRCRiskFlowStatusView, NSString, UIButton, UIImageView, UILabel, UITextField, UIView;

@interface DRCCheckIdentityInfoViewController : DRCBaseViewController <UITextFieldDelegate>
{
    UIView *_backView;
    UILabel *_nameLabel;
    UILabel *_idLabel;
    UITextField *_nameTextField;
    UITextField *_idTextField;
    UIButton *_nextButton;
    UIView *_lineView;
    DRCRiskFlowStatusView *_riskFlowStatusView;
    UILabel *_noticeLabel;
    UIImageView *_noticeImageView;
}

@property(retain, nonatomic) UIImageView *noticeImageView; // @synthesize noticeImageView=_noticeImageView;
@property(retain, nonatomic) UILabel *noticeLabel; // @synthesize noticeLabel=_noticeLabel;
@property(retain, nonatomic) DRCRiskFlowStatusView *riskFlowStatusView; // @synthesize riskFlowStatusView=_riskFlowStatusView;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIButton *nextButton; // @synthesize nextButton=_nextButton;
@property(retain, nonatomic) UITextField *idTextField; // @synthesize idTextField=_idTextField;
@property(retain, nonatomic) UITextField *nameTextField; // @synthesize nameTextField=_nameTextField;
@property(retain, nonatomic) UILabel *idLabel; // @synthesize idLabel=_idLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
- (void).cxx_destruct;
- (void)checkNextButtonEnable;
- (void)textFieldTextChanged:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)setContraints;
- (void)createView;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

