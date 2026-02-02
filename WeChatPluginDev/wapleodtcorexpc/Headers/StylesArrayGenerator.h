//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString;

@interface StylesArrayGenerator
{
    struct _NSParserPosition _stPosition;
    NSMutableArray *_arrStyles;
    double _nextLineY;
}

- (void).cxx_destruct;
@property(nonatomic) double nextLineY; // @synthesize nextLineY=_nextLineY;
@property(nonatomic) struct _NSParserPosition stPosition; // @synthesize stPosition=_stPosition;
- (id)getParsedStyles;
- (id)patternForContent:(id)arg1 range:(struct _NSRange)arg2 parser:(id)arg3;
- (void)clearData;
- (id)getStyles;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

