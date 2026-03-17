//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, QAnnotationContainerView, QAnnotationView, UIControl, UIView;
@protocol QAnnotation;

@protocol QAnnotationContainerViewDelegate <NSObject>

@optional
- (void)containerView:(QAnnotationContainerView *)arg1 didAnnotationViewTapped:(QAnnotationView *)arg2;
- (void)containerView:(QAnnotationContainerView *)arg1 annotationView:(QAnnotationView *)arg2 calloutAccessoryControlTapped:(UIControl *)arg3;
- (void)containerView:(QAnnotationContainerView *)arg1 didTapCallout:(QAnnotationView *)arg2;
- (void)containerView:(QAnnotationContainerView *)arg1 annotationView:(QAnnotationView *)arg2 didChangeDragState:(int)arg3 fromOldState:(int)arg4;
- (void)containerView:(QAnnotationContainerView *)arg1 annotationView:(QAnnotationView *)arg2 collisionViewDidShow:(NSArray *)arg3;
- (void)containerView:(QAnnotationContainerView *)arg1 annotationView:(QAnnotationView *)arg2 collisionViewDidHide:(NSArray *)arg3;
- (void)containerView:(QAnnotationContainerView *)arg1 didDeselectAnnotationView:(QAnnotationView *)arg2;
- (void)containerView:(QAnnotationContainerView *)arg1 didSelectAnnotationView:(QAnnotationView *)arg2;
- (void)containerView:(QAnnotationContainerView *)arg1 didAddAnnotationViews:(NSArray *)arg2;
- (UIView *)containerView:(QAnnotationContainerView *)arg1 customCalloutForAnnotationView:(QAnnotationView *)arg2;
- (QAnnotationView *)containerView:(QAnnotationContainerView *)arg1 viewForAnnotation:(id <QAnnotation>)arg2;
@end

