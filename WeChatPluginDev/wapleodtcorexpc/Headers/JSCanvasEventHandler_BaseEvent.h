//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol JSCanvasEventHandlerContextDelegate;

@interface JSCanvasEventHandler_BaseEvent
{
    id <JSCanvasEventHandlerContextDelegate> _canvasContext;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <JSCanvasEventHandlerContextDelegate> canvasContext; // @synthesize canvasContext=_canvasContext;

@end

