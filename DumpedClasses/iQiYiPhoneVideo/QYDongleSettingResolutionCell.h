//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIButton, UILabel, UIView;

@interface QYDongleSettingResolutionCell : UITableViewCell
{
    UIButton *_minusBtn;
    UIButton *_plusBtn;
    UILabel *_label;
    UIView *_sep;
}

@property(retain, nonatomic) UIView *sep; // @synthesize sep=_sep;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIButton *plusBtn; // @synthesize plusBtn=_plusBtn;
@property(retain, nonatomic) UIButton *minusBtn; // @synthesize minusBtn=_minusBtn;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

