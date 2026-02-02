//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface StoreEmotionSingleDownloadResult : NSObject
{
    NSData *_data;
    NSString *_path;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;

@end

