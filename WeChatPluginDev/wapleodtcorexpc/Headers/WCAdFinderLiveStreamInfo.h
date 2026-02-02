//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCAdFinderLiveInfo, WCAdFinderLiveStreamBrandWallpaperInfo;

@interface WCAdFinderLiveStreamInfo : NSObject
{
    unsigned int _previewJoinliveAdControlFlag;
    int _displayType;
    WCAdFinderLiveInfo *_finderLiveInfo;
    WCAdFinderLiveStreamBrandWallpaperInfo *_brandWallpaperInfo;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCAdFinderLiveStreamBrandWallpaperInfo *brandWallpaperInfo; // @synthesize brandWallpaperInfo=_brandWallpaperInfo;
@property(nonatomic) int displayType; // @synthesize displayType=_displayType;
@property(nonatomic) unsigned int previewJoinliveAdControlFlag; // @synthesize previewJoinliveAdControlFlag=_previewJoinliveAdControlFlag;
@property(retain, nonatomic) WCAdFinderLiveInfo *finderLiveInfo; // @synthesize finderLiveInfo=_finderLiveInfo;
- (_Bool)isValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

