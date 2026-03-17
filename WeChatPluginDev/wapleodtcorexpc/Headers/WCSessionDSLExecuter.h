//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCSessionDSLExplainer;

@interface WCSessionDSLExecuter : NSObject
{
    WCSessionDSLExplainer *_sessionDSLExplainer;
}

@property(retain, nonatomic) WCSessionDSLExplainer *sessionDSLExplainer; // @synthesize sessionDSLExplainer=_sessionDSLExplainer;
- (_Bool)checkJsonRightful:(id)arg1;
- (id)executeInstruction:(id)arg1 withDataPath:(id)arg2;
- (id)init;

@end

