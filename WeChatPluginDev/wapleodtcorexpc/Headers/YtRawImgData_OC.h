//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface YtRawImgData_OC
{
    int _x;
    int _y;
    NSString *_image;
    long long _capture_time;
    NSString *_checksum;
}

- (void).cxx_destruct;
@property(nonatomic) int y; // @synthesize y=_y;
@property(nonatomic) int x; // @synthesize x=_x;
@property(retain, nonatomic) NSString *checksum; // @synthesize checksum=_checksum;
@property(nonatomic) long long capture_time; // @synthesize capture_time=_capture_time;
@property(retain, nonatomic) NSString *image; // @synthesize image=_image;

@end

