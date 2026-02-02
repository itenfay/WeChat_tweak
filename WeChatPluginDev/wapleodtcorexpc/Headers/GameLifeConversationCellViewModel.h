//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class GameLifeConversation, GameLifeConversationCell, MMBaseSessionCellData;

@interface GameLifeConversationCellViewModel : NSObject
{
    GameLifeConversationCell *_cell;
    GameLifeConversation *_conversation;
    MMBaseSessionCellData *_cellData;
}

+ (id)cellDataForConversation:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MMBaseSessionCellData *cellData; // @synthesize cellData=_cellData;
@property(retain, nonatomic) GameLifeConversation *conversation; // @synthesize conversation=_conversation;
@property(nonatomic) __weak GameLifeConversationCell *cell; // @synthesize cell=_cell;
- (void)setupHistoryCellData:(id)arg1;

@end

