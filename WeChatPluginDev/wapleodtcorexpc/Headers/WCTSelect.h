//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCTSelect
{
    struct SyntaxList<WCTResultColumn> _resultColumns;
    Class m_class;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)firstObject;
- (id)allObjects;
- (id)ofClass:(Class)arg1;
- (id)onResultColumns:(const void *)arg1;
- (id)fromTable:(id)arg1;
- (void)willPrepare:(void *)arg1;

@end

