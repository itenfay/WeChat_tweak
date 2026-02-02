//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class InnerQMarker, NSString, QBrandPromotionContext, QBrandPromotionItem;

@interface QBrandPromotionViewItem : NSObject
{
    QBrandPromotionItem *_item;
    InnerQMarker *_marker;
    QBrandPromotionContext *_brandPromotionContext;
}

- (void).cxx_destruct;
@property(nonatomic) __weak QBrandPromotionContext *brandPromotionContext; // @synthesize brandPromotionContext=_brandPromotionContext;
@property(retain, nonatomic) InnerQMarker *marker; // @synthesize marker=_marker;
@property(readonly, nonatomic) QBrandPromotionItem *item; // @synthesize item=_item;
- (void)brandPromotionImageDownloader:(id)arg1 failure:(id)arg2;
- (void)createMarkerWithImage:(id)arg1;
- (void)brandPromotionImageDownloader:(id)arg1 success:(id)arg2;
- (_Bool)isNight;
- (double)connerRadius;
- (struct CGSize)imageSize;
- (id)imageURLKey;
- (id)imageURLString;
- (id)mapView;
- (void)removeMarker;
- (id)initWithBrandPromotionItem:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

