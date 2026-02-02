//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCAdFinderLiveStreamBrandWallpaperInfo : NSObject
{
    int _horizontalGravity;
    int _verticalGravity;
    NSString *_brandWallpaperImageUrl;
    NSString *_frontImageUrl;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(nonatomic) int verticalGravity; // @synthesize verticalGravity=_verticalGravity;
@property(nonatomic) int horizontalGravity; // @synthesize horizontalGravity=_horizontalGravity;
@property(retain, nonatomic) NSString *frontImageUrl; // @synthesize frontImageUrl=_frontImageUrl;
@property(retain, nonatomic) NSString *brandWallpaperImageUrl; // @synthesize brandWallpaperImageUrl=_brandWallpaperImageUrl;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

