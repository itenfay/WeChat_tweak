//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCPasteTextLengthLogic
{
    unsigned long long pasteLength;
}

@property(nonatomic) unsigned long long pasteLength; // @synthesize pasteLength;
- (void)reset;
- (_Bool)isPasteTooLongWithTextLength:(unsigned long long)arg1;
- (void)textChange:(id)arg1;

@end

