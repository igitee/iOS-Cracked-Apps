//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DRCBaseViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class DRCCommitOrderDataModel, DRCCouponsDataModel, DRCDetailProductModel, DRCOrderConfirmBottomView, DRCOrderConfirmFeeModel, DRCProductSpecialInfoModel, NSMutableArray, NSString, UIImageView, UITableView;

@interface DRCOrderConfirmViewController : DRCBaseViewController <UITableViewDelegate, UITableViewDataSource>
{
    UITableView *_feeTableView;
    DRCOrderConfirmBottomView *_bottomView;
    NSMutableArray *_dataArray;
    DRCOrderConfirmFeeModel *_productFeeModel;
    DRCDetailProductModel *_selectedDetailProduct;
    DRCCommitOrderDataModel *_commitOrderDataModel;
    DRCProductSpecialInfoModel *_selectSpecialInfoModel;
    DRCCouponsDataModel *_selectCouponModel;
    long long _selectedNecessary;
    unsigned long long _orderId;
    UIImageView *_backShadowImageView;
    double _headerViewHeight;
}

@property(nonatomic) double headerViewHeight; // @synthesize headerViewHeight=_headerViewHeight;
@property(retain, nonatomic) UIImageView *backShadowImageView; // @synthesize backShadowImageView=_backShadowImageView;
@property(nonatomic) unsigned long long orderId; // @synthesize orderId=_orderId;
@property(nonatomic) long long selectedNecessary; // @synthesize selectedNecessary=_selectedNecessary;
@property(retain, nonatomic) DRCCouponsDataModel *selectCouponModel; // @synthesize selectCouponModel=_selectCouponModel;
@property(retain, nonatomic) DRCProductSpecialInfoModel *selectSpecialInfoModel; // @synthesize selectSpecialInfoModel=_selectSpecialInfoModel;
@property(retain, nonatomic) DRCCommitOrderDataModel *commitOrderDataModel; // @synthesize commitOrderDataModel=_commitOrderDataModel;
@property(retain, nonatomic) DRCDetailProductModel *selectedDetailProduct; // @synthesize selectedDetailProduct=_selectedDetailProduct;
@property(retain, nonatomic) DRCOrderConfirmFeeModel *productFeeModel; // @synthesize productFeeModel=_productFeeModel;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) DRCOrderConfirmBottomView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UITableView *feeTableView; // @synthesize feeTableView=_feeTableView;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)gotoPrePaySucccess:(CDUnknownBlockType)arg1;
- (void)dealFeeSelectedWithModel:(id)arg1 switchButton:(id)arg2;
- (void)placeOrder;
- (void)checkOptionAndPlaceOrder;
- (void)gotoServiceLocationView:(_Bool)arg1;
- (void)chooseCouponOrSpecial:(_Bool)arg1;
- (void)reloadData;
- (void)updateViewIsFirstTime:(_Bool)arg1;
- (void)updateProductDetailType:(unsigned long long)arg1 succeedBlock:(CDUnknownBlockType)arg2 failedBlock:(CDUnknownBlockType)arg3;
- (void)setConstraints;
- (void)createViews;
- (void)createNavBarView;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)dealloc;
- (id)initWithParams:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

