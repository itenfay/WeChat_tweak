//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface MMLiveVideoFrameWidgetObj : NSObject
{
    NSString *_instanceId;
    UIImage *_contentImage;
    struct CGPoint _normalizedCenter;
    struct CGPoint _normalizedAnchorPoint;
    CDStruct_76c2da79 _transformDescription;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *contentImage; // @synthesize contentImage=_contentImage;
@property(nonatomic) CDStruct_76c2da79 transformDescription; // @synthesize transformDescription=_transformDescription;
@property(nonatomic) struct CGPoint normalizedAnchorPoint; // @synthesize normalizedAnchorPoint=_normalizedAnchorPoint;
@property(nonatomic) struct CGPoint normalizedCenter; // @synthesize normalizedCenter=_normalizedCenter;
@property(retain, nonatomic) NSString *instanceId; // @synthesize instanceId=_instanceId;
- (_Bool)isValid;
- (id)initWithInstanceId:(id)arg1;

@end

