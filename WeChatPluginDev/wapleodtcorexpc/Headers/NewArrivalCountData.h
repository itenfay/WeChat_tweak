//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface NewArrivalCountData : NSObject
{
    NSString *m_nsFile;
    NSMutableDictionary *m_dicHistory;
}

+ (id)dataFromFile:(id)arg1;
- (void).cxx_destruct;
- (_Bool)removeItem:(id)arg1;
- (_Bool)updateItem:(id)arg1 arrivalCount:(unsigned int)arg2 msgid:(unsigned int)arg3;
- (_Bool)setItem:(id)arg1;
- (id)getItem:(id)arg1;
- (id)getArrayItem;
- (_Bool)save;
- (void)afterLoadData:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

