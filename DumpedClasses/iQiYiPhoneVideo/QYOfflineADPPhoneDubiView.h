//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class QYOfflineADPPhoneTouchButton, UIImageView, UILabel;
@protocol QYOfflineADPPhoneDubiViewDelegate;

@interface QYOfflineADPPhoneDubiView : UIView
{
    long long _fromeType;
    _Bool _isOpen;
    id <QYOfflineADPPhoneDubiViewDelegate> _delegate;
    UILabel *_titleLabel;
    UIImageView *_iconView;
    QYOfflineADPPhoneTouchButton *_dubiButton;
}

@property(retain, nonatomic) QYOfflineADPPhoneTouchButton *dubiButton; // @synthesize dubiButton=_dubiButton;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) _Bool isOpen; // @synthesize isOpen=_isOpen;
@property(nonatomic) __weak id <QYOfflineADPPhoneDubiViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dubiAction:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 fromType:(long long)arg2;

@end

