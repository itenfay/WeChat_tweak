//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface OpenALWrapper : NSObject
{
    unsigned int _sid;
}

+ (id)wrapperWithSid:(unsigned int)arg1;
@property(nonatomic) unsigned int sid; // @synthesize sid=_sid;

@end

