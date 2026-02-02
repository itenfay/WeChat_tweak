//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface MMLiveWevisionWidgetObj : NSObject
{
    NSString *_instanceId;
    UIImage *_contentImage;
    struct CGPoint _normalizedAnchorPoint;
    struct CGRect _normalizedFrame;
    CDStruct_94e04e92 _transformDescription;
}

+ (_Bool)isNormalizedAnchorPointValid:(struct CGPoint)arg1;
- (void).cxx_destruct;
@property(nonatomic) CDStruct_94e04e92 transformDescription; // @synthesize transformDescription=_transformDescription;
@property(nonatomic) struct CGPoint normalizedAnchorPoint; // @synthesize normalizedAnchorPoint=_normalizedAnchorPoint;
@property(nonatomic) struct CGRect normalizedFrame; // @synthesize normalizedFrame=_normalizedFrame;
@property(retain, nonatomic) UIImage *contentImage; // @synthesize contentImage=_contentImage;
@property(retain, nonatomic) NSString *instanceId; // @synthesize instanceId=_instanceId;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isValid;
- (id)initWithInstanceId:(id)arg1;

@end

