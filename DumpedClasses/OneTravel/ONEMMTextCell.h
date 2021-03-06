//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ONEMMTableViewCell.h"

#import "UITextFieldDelegate.h"

@class NSString, UILabel, UITextField;

@interface ONEMMTextCell : ONEMMTableViewCell <UITextFieldDelegate>
{
    UILabel *_titleLabel;
    UITextField *_textField;
}

+ (double)heightWithItem:(id)arg1 tableViewManager:(id)arg2;
+ (_Bool)canFocusWithItem:(id)arg1;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldEndEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (void)cellWillAppear;
- (void)cellDidLoad;
- (id)responder;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

