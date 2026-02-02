//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCTDatabase;

@interface MMActiveMessageInfoPersist : NSObject
{
    WCTDatabase *_infoDB;
}

+ (id)getPathOfActiveMessageDB;
+ (id)getPathOfStatPath;
+ (id)getPathOfInfoPath;
- (void).cxx_destruct;
@property(retain, nonatomic) WCTDatabase *infoDB; // @synthesize infoDB=_infoDB;
- (id)getAllActiveMessageInfo:(id)arg1 start:(unsigned int)arg2 end:(unsigned int)arg3;
- (void)addActiveMessageInfo:(id)arg1;
- (void)p_createDataBaes;
- (id)p_getBrowseInfoTable;
- (void)closeAndRemoveDB;
- (id)init;

@end

