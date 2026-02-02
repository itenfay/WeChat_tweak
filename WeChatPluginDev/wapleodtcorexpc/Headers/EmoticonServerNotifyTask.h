//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray;
@protocol EmoticonServerNotifyTaskDelegate;

@interface EmoticonServerNotifyTask
{
    unsigned long long _opcode;
    unsigned long long _type;
    NSArray *_md5ObjectArray;
    id <EmoticonServerNotifyTaskDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <EmoticonServerNotifyTaskDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *md5ObjectArray; // @synthesize md5ObjectArray=_md5ObjectArray;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) unsigned long long opcode; // @synthesize opcode=_opcode;
- (_Bool)resumeRecoverFromServerLogic;
- (_Bool)resumeLogic;
- (id)initWithOpcode:(unsigned long long)arg1 emoticonType:(unsigned long long)arg2 md5ObjectArray:(id)arg3 andDelegate:(id)arg4;

@end

