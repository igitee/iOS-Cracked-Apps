//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, QMRoute, QMapView, QOverspeedInfo, QRouteSearchError, QttsParam, RouteResult, UIImage, UIView;

@protocol QMapNavigationDelegate <NSObject>

@optional
- (void)mapViewDidRestoreTracking:(QMapView *)arg1;
- (void)mapViewDidLoseTrackingForUserTouch:(QMapView *)arg1;
- (void)arriveFreeWay;
- (void)arrivePassPoint:(long long)arg1;
- (void)hideCameraLiveView;
- (void)showCameraLiveView:(UIImage *)arg1;
- (void)hideLaneView;
- (void)showLaneView:(UIView *)arg1;
- (void)hideRoadEnlargementView;
- (void)showRoadEnlargementView:(UIImage *)arg1;
- (void)mapDayNightStyleChanged:(_Bool)arg1;
- (void)recomputeRouteDidFailWithErrorFinally:(QRouteSearchError *)arg1;
- (void)recomputeRouteDidFailWithError:(QRouteSearchError *)arg1;
- (void)recomputeRouteDidFinished:(RouteResult *)arg1;
- (void)recomputeRouteWillStarted;
- (void)userTrackingModeNone;
- (void)showRouteFinished;
- (void)userNavigationEnd:(_Bool)arg1;
- (void)userLocationErr:(NSString *)arg1;
- (void)triggerOverspeed:(QOverspeedInfo *)arg1;
- (void)returnTTSValue:(QttsParam *)arg1;
- (void)updateRouteResult:(QMRoute *)arg1;
@end

