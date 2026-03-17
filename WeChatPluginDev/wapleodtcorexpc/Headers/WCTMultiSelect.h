//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCTMultiSelect : NSObject
{
    struct SyntaxList<WCTResultColumn> _resultColumns;
}

- (id)allMultiObjects;
- (id)firstMultiObject;
- (id)onResultColumns:(const void *)arg1;
- (id)fromTables:(id)arg1;

@end

