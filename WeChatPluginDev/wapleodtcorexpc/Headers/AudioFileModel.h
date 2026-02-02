//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface AudioFileModel : NSObject
{
    int _sampleRate;
    int _mDataLen;
    NSString *_path;
    double *_data;
    NSString *_ringId;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *ringId; // @synthesize ringId=_ringId;
@property(nonatomic) int mDataLen; // @synthesize mDataLen=_mDataLen;
@property(nonatomic) double *data; // @synthesize data=_data;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(nonatomic) int sampleRate; // @synthesize sampleRate=_sampleRate;

@end

