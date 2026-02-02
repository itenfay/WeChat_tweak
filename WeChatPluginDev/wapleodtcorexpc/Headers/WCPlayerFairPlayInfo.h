//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPlayerFairPlayInfo : NSObject
{
    _Bool _drmCompatible;
    NSString *_certificateUrl;
    NSString *_contentKeyUrl;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool drmCompatible; // @synthesize drmCompatible=_drmCompatible;
@property(retain, nonatomic) NSString *contentKeyUrl; // @synthesize contentKeyUrl=_contentKeyUrl;
@property(retain, nonatomic) NSString *certificateUrl; // @synthesize certificateUrl=_certificateUrl;
- (id)init;

@end

