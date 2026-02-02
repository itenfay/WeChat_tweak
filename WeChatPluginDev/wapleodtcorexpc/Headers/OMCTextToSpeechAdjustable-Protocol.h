//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol OMCTextToSpeechAdjustable <NSObject>
@property(readonly, nonatomic) NSString *speechText;
@property(readonly, nonatomic) NSString *roleName;
@property(readonly, nonatomic) NSString *roleID;
@property(readonly, nonatomic) NSString *audioFilePath;
- (void)clearSpeech;
- (_Bool)replaceSpeechWithFilePath:(NSString *)arg1;
- (_Bool)buildSpeechWithFilePath:(NSString *)arg1;
- (void)updateRoleID:(NSString *)arg1 roleName:(NSString *)arg2;
- (void)resetRole;
@end

