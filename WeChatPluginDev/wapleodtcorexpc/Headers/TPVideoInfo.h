//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface TPVideoInfo : NSObject
{
    long long _width;
    long long _height;
    long long _videoCodecId;
    NSString *_downloadFileID;
    NSArray *_downloadParamDataArray;
}

+ (id)build:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *downloadParamDataArray; // @synthesize downloadParamDataArray=_downloadParamDataArray;
@property(copy, nonatomic) NSString *downloadFileID; // @synthesize downloadFileID=_downloadFileID;
@property(nonatomic) long long videoCodecId; // @synthesize videoCodecId=_videoCodecId;
@property(nonatomic) long long height; // @synthesize height=_height;
@property(nonatomic) long long width; // @synthesize width=_width;

@end

