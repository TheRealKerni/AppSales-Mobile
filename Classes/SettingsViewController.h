/*
SettingsViewController.h
AppSalesMobile

* Copyright (c) 2008, omz:software
* All rights reserved.
*
* Redistribution and use in source and binary forms, with or without
* modification, are permitted provided that the following conditions are met:
*     * Redistributions of source code must retain the above copyright
*       notice, this list of conditions and the following disclaimer.
*     * Redistributions in binary form must reproduce the above copyright
*       notice, this list of conditions and the following disclaimer in the
*       documentation and/or other materials provided with the distribution.
*     * Neither the name of the <organization> nor the
*       names of its contributors may be used to endorse or promote products
*       derived from this software without specific prior written permission.
*
* THIS SOFTWARE IS PROVIDED BY omz:software ''AS IS'' AND ANY
* EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
* WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
* DISCLAIMED. IN NO EVENT SHALL <copyright holder> BE LIABLE FOR ANY
* DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
* (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
* LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
* ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
* (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
* SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#import <UIKit/UIKit.h>


@interface SettingsViewController : UIViewController <UITextFieldDelegate> {
	IBOutlet UILabel *explanationsLabel;
	IBOutlet UILabel *copyrightLabel;
	IBOutlet UITextField *usernameTextField;
	IBOutlet UITextField *passwordTextField;
	IBOutlet UILabel *translationLabel;
	IBOutlet UISwitch *translationSwitch;
	IBOutlet UISegmentedControl *currencySelectionControl;
	IBOutlet UILabel *loginSectionLabel;
	IBOutlet UILabel *usernameLabel;
	IBOutlet UILabel *passwordLabel;
	IBOutlet UILabel *currencySectionLabel;
	IBOutlet UISegmentedControl *refreshNowLabel;
	IBOutlet UILabel *lastRefreshLabel;
}

- (IBAction)refreshExchangeRates:(id)sender;
- (IBAction)changeCurrency:(id)sender;

- (void)currencyRatesDidUpdate;
- (void)currencyRatesFailedToUpdate;
- (void)baseCurrencyChanged;

@end
