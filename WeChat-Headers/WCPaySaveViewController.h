//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

@class NSString, UIButton, UILabel, WCPayBindCardItem, WCPayMoneyTextFieldItem;

@interface WCPaySaveViewController : WCPayBaseViewController
{
    UIButton *m_footerButton;
    id <WCPaySaveViewControllerDelegate> m_delegate;
    UILabel *oDetailLabel;
    WCPayMoneyTextFieldItem *_m_textFieldItem;
    WCPayBindCardItem *_m_textBindCardItem;
    NSString *_detailText;
}

@property(retain, nonatomic) NSString *detailText; // @synthesize detailText=_detailText;
@property(retain, nonatomic) WCPayBindCardItem *m_textBindCardItem; // @synthesize m_textBindCardItem=_m_textBindCardItem;
@property(retain, nonatomic) WCPayMoneyTextFieldItem *m_textFieldItem; // @synthesize m_textFieldItem=_m_textFieldItem;
- (void).cxx_destruct;
- (void)detailLabelFitText;
- (id)defaultCard;
- (id)cardInfos;
- (void)keyboardDidHide:(id)arg1;
- (void)changeY:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)refreshBindCardSaveInfo;
- (void)clickCardView;
- (void)setupData;
- (void)setDelegate:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)refreshViewWithData:(id)arg1;
- (void)WCBaseInfoItemEndEdit:(id)arg1;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)onNext;
- (void)viewDidLoad;
- (void)reloadTableView;
- (void)initNavigationBar;
- (void)FillSaveMoneyCancel;
- (void)viewDidLayoutSubviews;
- (void)dealloc;
- (id)init;

@end

