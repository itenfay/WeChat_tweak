//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface QConfigPreference : NSObject
{
    NSString *_businessKey;
    NSString *_miniProgramID;
    NSString *_configDirectoryPath;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *configDirectoryPath; // @synthesize configDirectoryPath=_configDirectoryPath;
@property(readonly, copy, nonatomic) NSString *miniProgramID; // @synthesize miniProgramID=_miniProgramID;
@property(readonly, copy, nonatomic) NSString *businessKey; // @synthesize businessKey=_businessKey;
- (id)initWithBusinessKey:(id)arg1 miniProgramID:(id)arg2 configDirectoryPath:(id)arg3;

@end

