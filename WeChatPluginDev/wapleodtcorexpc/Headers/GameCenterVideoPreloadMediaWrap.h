//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface GameCenterVideoPreloadMediaWrap
{
    NSString *_url;
}

+ (id)getCacheIdentifyFromUrl:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (id)getTempDirectory;
- (_Bool)isLIFOPreloadTask;
- (id)getMediaWrapIdentifier;
- (id)initWithUrl:(id)arg1;
- (id)getMediaWrapUrl;

@end

