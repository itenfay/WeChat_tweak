//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface QMUAnnotation : NSObject
{
    NSString *_title;
    NSString *_subtitle;
    struct CLLocationCoordinate2D _coordinate;
    CDStruct_34734122 _point;
}

- (void).cxx_destruct;
@property(nonatomic) CDStruct_c3b9c2ee point; // @synthesize point=_point;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)setCoordinate:(struct CLLocationCoordinate2D)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

