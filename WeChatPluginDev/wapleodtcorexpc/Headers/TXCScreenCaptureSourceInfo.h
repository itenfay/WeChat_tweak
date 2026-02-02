//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface TXCScreenCaptureSourceInfo : NSObject
{
    _Bool _sharesScreen;
    long long _sourceId;
    NSDictionary *_extInfo;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *extInfo; // @synthesize extInfo=_extInfo;
@property(nonatomic) long long sourceId; // @synthesize sourceId=_sourceId;
@property(nonatomic) _Bool sharesScreen; // @synthesize sharesScreen=_sharesScreen;

@end

