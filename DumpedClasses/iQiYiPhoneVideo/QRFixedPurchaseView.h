//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class QRBookModel, QRDataLoadManager, QRLineLabel, QRPurchaseModel, UIButton, UIImageView, UILabel;
@protocol QRFixedPurchaseViewDelegate;

@interface QRFixedPurchaseView : UIView
{
    struct CGRect SelfFrame;
    _Bool bNotEnoughMoney;
    id <QRFixedPurchaseViewDelegate> _delegate;
    UIView *_contentView;
    UIView *_line;
    UILabel *_titleLb;
    UILabel *_bookNameLbl;
    UIImageView *_discountImageView;
    QRBookModel *_book;
    QRPurchaseModel *_purchaseModel;
    UIButton *_buyBtn;
    UIView *_loadingView;
    QRLineLabel *_originPayLabel;
    UILabel *_mustPayLabel;
    UILabel *_currentBalanceLabel;
    UILabel *_noDataLabel;
    UIView *_errorView;
    QRDataLoadManager *_remainChaptersNetwork;
    UILabel *_freeNoteLbl;
    UIView *_noDataBgView;
}

@property(retain, nonatomic) UIView *noDataBgView; // @synthesize noDataBgView=_noDataBgView;
@property(retain, nonatomic) UILabel *freeNoteLbl; // @synthesize freeNoteLbl=_freeNoteLbl;
@property(retain, nonatomic) QRDataLoadManager *remainChaptersNetwork; // @synthesize remainChaptersNetwork=_remainChaptersNetwork;
@property(retain, nonatomic) UIView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) UILabel *noDataLabel; // @synthesize noDataLabel=_noDataLabel;
@property(retain, nonatomic) UILabel *currentBalanceLabel; // @synthesize currentBalanceLabel=_currentBalanceLabel;
@property(retain, nonatomic) UILabel *mustPayLabel; // @synthesize mustPayLabel=_mustPayLabel;
@property(retain, nonatomic) QRLineLabel *originPayLabel; // @synthesize originPayLabel=_originPayLabel;
@property(retain, nonatomic) UIView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIButton *buyBtn; // @synthesize buyBtn=_buyBtn;
@property(retain, nonatomic) QRPurchaseModel *purchaseModel; // @synthesize purchaseModel=_purchaseModel;
@property(retain, nonatomic) QRBookModel *book; // @synthesize book=_book;
@property(retain, nonatomic) UIImageView *discountImageView; // @synthesize discountImageView=_discountImageView;
@property(retain, nonatomic) UILabel *bookNameLbl; // @synthesize bookNameLbl=_bookNameLbl;
@property(retain, nonatomic) UILabel *titleLb; // @synthesize titleLb=_titleLb;
@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <QRFixedPurchaseViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool bNotEnoughMoney; // @synthesize bNotEnoughMoney;
@property(nonatomic) struct CGRect SelfFrame; // @synthesize SelfFrame;
- (void).cxx_destruct;
- (_Bool)isDark;
- (void)hideMonthlyOpenUpEntrance;
- (void)updateMonthlyOpenUpEntrance;
- (void)clearViews;
- (void)closeHandle:(id)arg1;
- (void)retryHancle:(id)arg1;
- (void)showErrorView;
- (void)showLoadingView;
- (void)showNoMoreDataView;
- (void)showNoDataView;
- (void)showPurchaseError;
- (void)showPurchaseNoMoney;
- (void)showPurchaseLoading;
- (void)buyHandle:(id)arg1;
- (void)showData:(id)arg1;
- (void)handleSuccess;
- (void)loadData;
- (void)openQRMontylyOpenUpViewController;
- (id)initWithFrame:(struct CGRect)arg1;

@end

