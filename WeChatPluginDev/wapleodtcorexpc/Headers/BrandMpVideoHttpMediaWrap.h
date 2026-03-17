//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface BrandMpVideoHttpMediaWrap : NSObject
{
    NSString *_vid;
}

@property(retain, nonatomic) NSString *vid; // @synthesize vid=_vid;
- (id)initWithVid:(id)arg1;
- (id)getMediaWrapUrl;
- (id)getMediaWrapIdentifier;

@end

