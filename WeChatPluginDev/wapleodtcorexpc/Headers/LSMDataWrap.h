//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData;

@interface LSMDataWrap : NSObject
{
    unsigned int _modifyTime;
    NSData *_data;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int modifyTime; // @synthesize modifyTime=_modifyTime;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
- (id)initWithData:(id)arg1 modifyTime:(unsigned int)arg2;

@end

