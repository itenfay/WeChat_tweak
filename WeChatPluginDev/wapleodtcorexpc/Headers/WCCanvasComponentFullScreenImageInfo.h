//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCCanvasComponentFullScreenImageInfo : NSObject
{
    int _scaleType;
    NSString *_fullScreenImageUrl;
}

@property(nonatomic) int scaleType; // @synthesize scaleType=_scaleType;
@property(retain, nonatomic) NSString *fullScreenImageUrl; // @synthesize fullScreenImageUrl=_fullScreenImageUrl;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

