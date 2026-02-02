//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, UIImage;

@interface MMMusicEditVideoCellExportModel : NSObject
{
    NSString *_localVideoPath;
    UIImage *_localThumbImage;
    double _videoCropStartTime;
    double _videoCropEndTime;
    NSMutableDictionary *_extInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *extInfo; // @synthesize extInfo=_extInfo;
@property(nonatomic) double videoCropEndTime; // @synthesize videoCropEndTime=_videoCropEndTime;
@property(nonatomic) double videoCropStartTime; // @synthesize videoCropStartTime=_videoCropStartTime;
@property(retain, nonatomic) UIImage *localThumbImage; // @synthesize localThumbImage=_localThumbImage;
@property(retain, nonatomic) NSString *localVideoPath; // @synthesize localVideoPath=_localVideoPath;

@end

