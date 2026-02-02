//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, QMapContext;

@interface QIntersectionOverlayManager : NSObject
{
    QMapContext *_context;
    NSMutableArray *_container;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *container; // @synthesize container=_container;
@property(nonatomic) __weak QMapContext *context; // @synthesize context=_context;
- (id)init;
- (id)payloadForOverlay:(id)arg1;
- (void)setIntersectionOverlayVisible:(_Bool)arg1 overlayID:(int)arg2;
- (void)removeInterSectionOverlay:(id)arg1;
- (void)addInterSectionOverlay:(id)arg1;

@end

