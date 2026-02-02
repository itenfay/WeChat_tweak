//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WANativeViewPointerEvent : NSObject
{
    long long _viewId;
    long long _type;
    long long _embedderId;
    long long _timeStampMicrosecond;
    struct CGPoint _position;
}

@property(nonatomic) struct CGPoint position; // @synthesize position=_position;
@property(nonatomic) long long timeStampMicrosecond; // @synthesize timeStampMicrosecond=_timeStampMicrosecond;
@property(nonatomic) long long embedderId; // @synthesize embedderId=_embedderId;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) long long viewId; // @synthesize viewId=_viewId;

@end

