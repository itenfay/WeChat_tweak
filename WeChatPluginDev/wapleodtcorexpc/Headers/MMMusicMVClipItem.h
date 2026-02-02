//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMMusicMVTrackItemLocalPic, NSString;

@interface MMMusicMVClipItem : NSObject
{
    NSString *_clipId;
    NSString *_videoLocalPath;
    NSString *_videoThumbPath;
    MMMusicMVTrackItemLocalPic *_localPic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMMusicMVTrackItemLocalPic *localPic; // @synthesize localPic=_localPic;
@property(retain, nonatomic) NSString *videoThumbPath; // @synthesize videoThumbPath=_videoThumbPath;
@property(retain, nonatomic) NSString *videoLocalPath; // @synthesize videoLocalPath=_videoLocalPath;
@property(retain, nonatomic) NSString *clipId; // @synthesize clipId=_clipId;
- (id)description;
- (_Bool)isVaild;

@end

