//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface GameHaowanMediaWrap : NSObject
{
    NSString *_videoUrl;
}

@property(retain, nonatomic) NSString *videoUrl; // @synthesize videoUrl=_videoUrl;
- (id)getTempDirectory;
- (id)getMediaWrapUrl;
- (id)getMediaWrapIdentifier;

@end

