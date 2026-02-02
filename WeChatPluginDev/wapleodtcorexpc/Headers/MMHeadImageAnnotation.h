//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMHeadImageAnnotationView, NSString, UserPositionItem;

@interface MMHeadImageAnnotation
{
    UserPositionItem *_userPositionItem;
    MMHeadImageAnnotationView *_annotationView;
    _Bool _showCallout;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool showCallout; // @synthesize showCallout=_showCallout;
@property(nonatomic) __weak MMHeadImageAnnotationView *annotationView; // @synthesize annotationView=_annotationView;
@property(retain, nonatomic) UserPositionItem *userPositionItem; // @synthesize userPositionItem=_userPositionItem;
- (void)setShowCallout:(_Bool)arg1 Animated:(_Bool)arg2;
- (void)setHeading:(double)arg1;
- (void)setCoordinate:(struct CLLocationCoordinate2D)arg1;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
- (id)initWithUserPostionItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

