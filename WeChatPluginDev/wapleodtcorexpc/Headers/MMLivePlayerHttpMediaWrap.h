//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MMLivePlayerHttpMediaWrap : NSObject
{
    NSString *_url;
}

@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (id)initWithEmpty;
- (id)getMediaWrapUrl;
- (id)getMediaWrapIdentifier;

@end

