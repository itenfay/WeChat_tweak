//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSValue;

@interface TXCVideoResolutionConstraint : NSObject
{
    long long _originEncodeBitrate;
    NSValue *_originEncodeResolution;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSValue *originEncodeResolution; // @synthesize originEncodeResolution=_originEncodeResolution;
@property(nonatomic) long long originEncodeBitrate; // @synthesize originEncodeBitrate=_originEncodeBitrate;
- (struct CGSize)adjustResolutionWithScreenResolution:(struct CGSize)arg1;

@end

