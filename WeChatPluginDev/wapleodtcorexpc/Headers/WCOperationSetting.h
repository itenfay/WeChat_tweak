//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface WCOperationSetting : NSObject
{
    NSMutableDictionary *dicUserBigImageClickedCount;
    NSMutableDictionary *dicUserBigImageAddedCount;
    _Bool needWriteBack;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool needWriteBack; // @synthesize needWriteBack;
@property(retain, nonatomic) NSMutableDictionary *dicUserBigImageAddedCount; // @synthesize dicUserBigImageAddedCount;
@property(retain, nonatomic) NSMutableDictionary *dicUserBigImageClickedCount; // @synthesize dicUserBigImageClickedCount;
- (void)addNewBigImageCountForUser:(id)arg1 addedCount:(unsigned long long)arg2;
- (void)addNewBigImageClickedCountForUser:(id)arg1 clickedCount:(unsigned long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

