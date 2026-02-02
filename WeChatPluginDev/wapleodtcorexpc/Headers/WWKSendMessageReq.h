//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WWKMessageAttachment;

@interface WWKSendMessageReq
{
    WWKMessageAttachment *_attachment;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WWKMessageAttachment *attachment; // @synthesize attachment=_attachment;
- (_Bool)deserializeWithDictionary:(id)arg1;
- (id)serializedDict;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

