//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface EcsGiftMsgRecordDataBase : NSObject
{
    MISSING_TYPE *database;
    MISSING_TYPE *table;
}

+ (id)instance;
- (void).cxx_destruct;
- (_Bool)recordExist:(id)arg1;
- (long long)getHasMsgClicked:(id)arg1;
- (void)delete:(id)arg1;
- (id)getUserName:(id)arg1;
- (unsigned int)getMsgLocalId:(id)arg1;
- (void)insert:(id)arg1 msgLocalId:(long long)arg2 userName:(id)arg3 hasMsgClicked:(long long)arg4;
- (id)init;

@end

