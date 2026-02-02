//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface StorageInfo : NSObject
{
    NSString *_data;
    NSString *_type;
    NSString *_size;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *size; // @synthesize size=_size;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *data; // @synthesize data=_data;
- (_Bool)isEmpty;

@end

